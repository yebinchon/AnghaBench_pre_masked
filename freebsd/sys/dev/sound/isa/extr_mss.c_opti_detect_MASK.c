
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int conf_rid; int indir_rid; int optibase; int password; int passwdreg; int bd_id; int * conf_base; int * indir; } ;
typedef int device_t ;




 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct mss_info*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct mss_info *VAR_3)
{
 int VAR_4;
 static const struct opticard {
  int boardid;
  int passwdreg;
  int password;
  int base;
  int indir_reg;
 } VAR_5[] = {
  { 128, 0, 0xe4, 0xf8f, 0xe0e },
  { 129, 3, 0xe5, 0xf8c, 0, },
  { 0 },
 };
 VAR_3->conf_rid = 3;
 VAR_3->indir_rid = 4;
 for (VAR_4 = 0; VAR_5[VAR_4].base; VAR_4++) {
  VAR_3->optibase = VAR_5[VAR_4].base;
  VAR_3->password = VAR_5[VAR_4].password;
  VAR_3->passwdreg = VAR_5[VAR_4].passwdreg;
  VAR_3->bd_id = VAR_5[VAR_4].boardid;

  if (VAR_5[VAR_4].indir_reg)
   VAR_3->indir = FUNC_0(VAR_2, VAR_1,
    &VAR_3->indir_rid, VAR_5[VAR_4].indir_reg,
    VAR_5[VAR_4].indir_reg+1, 1, VAR_0);

  VAR_3->conf_base = FUNC_0(VAR_2, VAR_1,
   &VAR_3->conf_rid, VAR_3->optibase, VAR_3->optibase+9,
   9, VAR_0);

  if (FUNC_2(VAR_3, 1) != 0xff) {
   return 1;
  } else {
   if (VAR_3->indir)
    FUNC_1(VAR_2, VAR_1, VAR_3->indir_rid, VAR_3->indir);
   VAR_3->indir = ((void*)0);
   if (VAR_3->conf_base)
    FUNC_1(VAR_2, VAR_1, VAR_3->conf_rid, VAR_3->conf_base);
   VAR_3->conf_base = ((void*)0);
  }
 }
 return 0;
}
