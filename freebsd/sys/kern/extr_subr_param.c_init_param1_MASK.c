
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;

void
FUNC_4(void)
{


 FUNC_0("kern.kstack_pages", &VAR_19);

 VAR_18 = -1;
 FUNC_0("kern.hz", &VAR_18);
 if (VAR_18 == -1)
  VAR_18 = VAR_34 > VAR_14 ? VAR_3 : VAR_2;
 VAR_29 = 1000000 / VAR_18;
 VAR_31 = VAR_11 / VAR_18;
 VAR_30 = FUNC_3(VAR_31);





 VAR_32 = VAR_4 - (VAR_18 * 10 * 60);




 FUNC_1("kern.maxswzone", &VAR_23);



 FUNC_1("kern.maxbcache", &VAR_20);
 VAR_25 = VAR_8;
 FUNC_0("kern.msgbufsize", &VAR_25);

 VAR_24 = VAR_7;
 FUNC_2("kern.maxtsiz", &VAR_24);
 VAR_16 = VAR_0;
 FUNC_2("kern.dfldsiz", &VAR_16);
 VAR_21 = VAR_5;
 FUNC_2("kern.maxdsiz", &VAR_21);
 VAR_17 = VAR_1;
 FUNC_2("kern.dflssiz", &VAR_17);
 VAR_22 = VAR_6;
 FUNC_2("kern.maxssiz", &VAR_22);
 VAR_28 = VAR_12;
 FUNC_2("kern.sgrowsiz", &VAR_28);






 VAR_26 = VAR_9;
 FUNC_0("kern.ngroups", &VAR_26);
 if (VAR_26 < VAR_9)
  VAR_26 = VAR_9;





 FUNC_0("kern.pid_max", &VAR_27);
 if (VAR_27 > VAR_10)
  VAR_27 = VAR_10;
 else if (VAR_27 < 300)
  VAR_27 = 300;

 FUNC_0("vfs.unmapped_buf_allowed", &VAR_33);
}
