
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ileb_nxt; int ileb_cnt; int* ilebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ubifs_info*,int,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6, VAR_7;

 for (VAR_4 = VAR_3->ileb_nxt; VAR_4 < VAR_3->ileb_cnt; VAR_4++) {
  VAR_6 = VAR_3->ilebs[VAR_4];
  FUNC_0("LEB %d", VAR_6);
  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_1, VAR_1, 0,
      VAR_0 | VAR_2, 0);
  if (!VAR_5)
   VAR_5 = VAR_7;
 }
 return VAR_5;
}
