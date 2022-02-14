
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int db_capture_inprogress ;
typedef int db_capture_bufoff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_4, VAR_5, VAR_6;
 size_t VAR_7;

 VAR_7 = sizeof(VAR_4);
 if (FUNC_2(VAR_1, &VAR_4, &VAR_7,
     ((void*)0), 0) < 0)
  FUNC_0(VAR_0, "sysctl: %s", VAR_1);
 VAR_7 = sizeof(VAR_4);
 if (FUNC_2(VAR_2, &VAR_5,
     &VAR_7, ((void*)0), 0) < 0)
  FUNC_0(VAR_0, "sysctl: %s", VAR_2);
 VAR_7 = sizeof(VAR_6);
 if (FUNC_2(VAR_3,
     &VAR_6, &VAR_7, ((void*)0), 0) < 0)
  FUNC_0(VAR_0, "sysctl: %s", VAR_3);
 FUNC_1("%u/%u bytes used\n", VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1("capture is on\n");
 else
  FUNC_1("capture is off\n");
}
