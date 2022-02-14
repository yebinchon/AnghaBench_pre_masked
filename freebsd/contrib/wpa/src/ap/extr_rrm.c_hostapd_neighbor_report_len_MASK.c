
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct hostapd_neighbor_entry {scalar_t__ civic; scalar_t__ lci; scalar_t__ nr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static size_t FUNC_1(struct wpabuf *VAR_0,
       struct hostapd_neighbor_entry *VAR_1,
       int VAR_2, int VAR_3)
{
 size_t VAR_4 = 2 + FUNC_0(VAR_1->nr);

 if (VAR_2 && VAR_1->lci)
  VAR_4 += 2 + FUNC_0(VAR_1->lci);

 if (VAR_3 && VAR_1->civic)
  VAR_4 += 2 + FUNC_0(VAR_1->civic);

 return VAR_4;
}
