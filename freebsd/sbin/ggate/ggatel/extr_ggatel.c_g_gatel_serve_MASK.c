
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_gate_ctl_io {size_t gctl_length; int gctl_error; int gctl_cmd; int gctl_offset; int * gctl_data; int gctl_unit; int gctl_version; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,struct g_gate_ctl_io*) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 () ;
 int * FUNC_12 (size_t) ;
 int FUNC_13 (int,int *,size_t,int ) ;
 int FUNC_14 (int,int *,size_t,int ) ;
 void* FUNC_15 (int *,size_t) ;
 size_t VAR_10 ;
 int FUNC_16 (int) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_17(int VAR_12)
{
 struct g_gate_ctl_io VAR_13;
 size_t VAR_14;

 if (VAR_9 == 0) {
  if (FUNC_2(0, 0) == -1) {
   FUNC_7(VAR_11, 1);
   FUNC_3(VAR_1, "Cannot daemonize");
  }
 }
 FUNC_9(VAR_7, "Worker created: %u.", FUNC_11());
 VAR_13.gctl_version = VAR_6;
 VAR_13.gctl_unit = VAR_11;
 VAR_14 = VAR_10;
 VAR_13.gctl_data = FUNC_12(VAR_14);
 for (;;) {
  int VAR_15;
once_again:
  VAR_13.gctl_length = VAR_14;
  VAR_13.gctl_error = 0;
  FUNC_8(VAR_4, &VAR_13);
  VAR_15 = VAR_13.gctl_error;
  switch (VAR_15) {
  case 0:
   break;
  case 130:

   FUNC_5(VAR_13.gctl_data);
   FUNC_6();
   FUNC_1(VAR_12);
   FUNC_4(VAR_2);
  case 129:

   FUNC_0(VAR_13.gctl_cmd == 133 ||
       VAR_13.gctl_cmd == 131);
   VAR_13.gctl_data = FUNC_15(VAR_13.gctl_data,
       VAR_13.gctl_length);
   if (VAR_13.gctl_data != ((void*)0)) {
    VAR_14 = VAR_13.gctl_length;
    goto once_again;
   }

  case 128:
  default:
   FUNC_10("ioctl(/dev/%s): %s.", VAR_5,
       FUNC_16(VAR_15));
  }

  VAR_15 = 0;
  switch (VAR_13.gctl_cmd) {
  case 132:
   if ((size_t)VAR_13.gctl_length > VAR_14) {
    VAR_13.gctl_data = FUNC_15(VAR_13.gctl_data,
        VAR_13.gctl_length);
    if (VAR_13.gctl_data != ((void*)0))
     VAR_14 = VAR_13.gctl_length;
    else
     VAR_15 = 129;
   }
   if (VAR_15 == 0) {
    if (FUNC_13(VAR_12, VAR_13.gctl_data, VAR_13.gctl_length,
        VAR_13.gctl_offset) == -1) {
     VAR_15 = VAR_8;
    }
   }
   break;
  case 133:
  case 131:
   if (FUNC_14(VAR_12, VAR_13.gctl_data, VAR_13.gctl_length,
       VAR_13.gctl_offset) == -1) {
    VAR_15 = VAR_8;
   }
   break;
  default:
   VAR_15 = VAR_0;
  }

  VAR_13.gctl_error = VAR_15;
  FUNC_8(VAR_3, &VAR_13);
 }
}
