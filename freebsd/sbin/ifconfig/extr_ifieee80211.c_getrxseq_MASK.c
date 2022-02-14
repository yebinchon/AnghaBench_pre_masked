
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_sta_info {int isi_state; int* isi_rxseqs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct ieee80211req_sta_info *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_2->isi_state & VAR_0) == 0)
  return VAR_2->isi_rxseqs[0];

 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2->isi_rxseqs[VAR_3] > VAR_4)
   VAR_4 = VAR_2->isi_rxseqs[VAR_3];
 return VAR_4;
}
