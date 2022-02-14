
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int* ilebs; scalar_t__ ileb_cnt; scalar_t__ ileb_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct ubifs_info*,int) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_3->ileb_cnt = 0;
 VAR_3->ileb_nxt = 0;
 VAR_6 = FUNC_2(VAR_3, VAR_4);
 FUNC_0("need about %d empty LEBS for TNC commit", VAR_6);
 if (!VAR_6)
  return 0;
 VAR_3->ilebs = FUNC_3(VAR_6 * sizeof(int), VAR_2);
 if (!VAR_3->ilebs)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_4(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_3->ilebs[VAR_3->ileb_cnt++] = VAR_7;
  FUNC_0("LEB %d", VAR_7);
 }
 if (FUNC_1())
  return -VAR_1;
 return 0;
}
