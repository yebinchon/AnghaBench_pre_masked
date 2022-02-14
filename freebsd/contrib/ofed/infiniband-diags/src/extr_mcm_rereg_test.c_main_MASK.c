
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int qp; scalar_t__ qkey; } ;
typedef TYPE_1__ ib_portid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int,int ,int,int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int,int) ;

int FUNC_14(int VAR_7, char **VAR_8)
{
 char *VAR_9 = "port_guids.list";
 int VAR_10[2] = { VAR_2, VAR_3 };
 ib_portid_t VAR_11;
 int VAR_12, VAR_13;
 uint8_t *VAR_14, *VAR_15;
 int VAR_16;

 if (VAR_7 > 1)
  VAR_9 = VAR_8[1];

 VAR_6 = FUNC_3(((void*)0), 0, VAR_10, 2);
 if (!VAR_6)
  FUNC_1("Failed to open port");

 FUNC_6(((void*)0), 0, &VAR_11);
 VAR_11.qp = 1;
 if (!VAR_11.qkey)
  VAR_11.qkey = VAR_0;

 VAR_16 = FUNC_12() + 256;
 VAR_14 = FUNC_0(1, VAR_16);
 if (!VAR_14) {
  FUNC_1("cannot alloc mem for umad: %s\n", FUNC_7(VAR_5));
  return -1;
 }
 VAR_12 = FUNC_4(VAR_6);

 VAR_13 = FUNC_11(VAR_12, VAR_1, 2, 0, ((void*)0));

 FUNC_5(VAR_9, VAR_12, VAR_13, &VAR_11, VAR_4);
 VAR_15 = FUNC_10(VAR_14);

 FUNC_2(VAR_14);
 FUNC_13(VAR_12, VAR_13);
 FUNC_8(VAR_12);
 FUNC_9();

 return 0;
}
