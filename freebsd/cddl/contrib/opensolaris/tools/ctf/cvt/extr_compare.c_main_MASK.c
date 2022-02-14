
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int td_iihash; } ;
typedef TYPE_1__ tdata_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int (*) (),int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 char* VAR_1 ;
 scalar_t__ FUNC_4 (char**,int,int *,int ,TYPE_1__**,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_3, char **VAR_4)
{
 tdata_t *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;

 VAR_1 = VAR_4[0];

 if (VAR_3 != 3) {
  FUNC_8();
  FUNC_0(2);
 }

 VAR_9 = VAR_4[1];
 VAR_10 = VAR_4[2];

 VAR_6 = FUNC_6();
 VAR_7 = FUNC_6();
 VAR_8 = FUNC_6();

 if (FUNC_5(VAR_6, VAR_10, 0) != 0)
  FUNC_3(VAR_6, VAR_7, ((void*)0), 1);
 else if (FUNC_4(&VAR_10, 1, ((void*)0), VAR_2, &VAR_7, 0)
     == 0)
  FUNC_7("%s doesn't have stabs or CTF\n", VAR_10);

 if (FUNC_4(&VAR_9, 1, ((void*)0), VAR_2, &VAR_5, 0) == 0)
  FUNC_7("%s doesn't contain CTF data\n", VAR_9);

 FUNC_3(VAR_7, VAR_5, VAR_8, 0);

 if ((VAR_11 = FUNC_1(VAR_8->td_iihash)) != 0) {
  (void) FUNC_2(VAR_8->td_iihash, (int (*)())VAR_0,
      ((void*)0));
  FUNC_7("%s grew by %d\n", VAR_10, VAR_11);
 }

 return (0);
}
