
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int kvm_t ;
typedef int db_capture_inprogress ;
typedef int db_capture_bufsize ;
typedef int db_capture_bufoff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int*,int,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(kvm_t *VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6;

 if (FUNC_2(VAR_3, VAR_0, &VAR_4,
     sizeof(VAR_4), 0) < 0)
  FUNC_1(-1, "kvm: unable to read db_capture_bufoff");
 if (FUNC_2(VAR_3, VAR_1, &VAR_5,
     sizeof(VAR_5), 0) < 0)
  FUNC_1(-1, "kvm: unable to read db_capture_bufsize");
 if (FUNC_2(VAR_3, VAR_2,
     &VAR_6, sizeof(VAR_6), 0) < 0)
  FUNC_0(-1, "kvm: unable to read db_capture_inprogress");
 FUNC_3("%u/%u bytes used\n", VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3("capture is on\n");
 else
  FUNC_3("capture is off\n");

}
