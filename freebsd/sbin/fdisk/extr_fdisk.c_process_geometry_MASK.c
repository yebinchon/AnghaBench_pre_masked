
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n_args; TYPE_1__* args; } ;
struct TYPE_4__ {int argtype; int arg_val; } ;
typedef TYPE_2__ CMD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_1(CMD *VAR_7)
{
    int VAR_8 = 1, VAR_9;

    while (1) {
 VAR_5 = 1;
     if (VAR_6) {
     FUNC_0(
 "ERROR line %d: the geometry specification line must occur before\n    all partition specifications",

      VAR_0);
     VAR_8 = 0;
     break;
 }
     if (VAR_7->n_args != 3) {
     FUNC_0("ERROR line %d: incorrect number of geometry args",
      VAR_0);
     VAR_8 = 0;
     break;
 }
     VAR_1 = 0;
     VAR_3 = 0;
     VAR_4 = 0;
     for (VAR_9 = 0; VAR_9 < 3; ++VAR_9) {
      switch (VAR_7->args[VAR_9].argtype) {
     case 'c':
  VAR_1 = VAR_7->args[VAR_9].arg_val;
  break;
     case 'h':
  VAR_3 = VAR_7->args[VAR_9].arg_val;
  break;
     case 's':
  VAR_4 = VAR_7->args[VAR_9].arg_val;
  break;
     default:
  FUNC_0(
  "ERROR line %d: unknown geometry arg type: '%c' (0x%02x)",
   VAR_0, VAR_7->args[VAR_9].argtype,
   VAR_7->args[VAR_9].argtype);
  VAR_8 = 0;
  break;
     }
 }
 if (VAR_8 == 0)
     break;

 VAR_2 = VAR_3 * VAR_4;




     if (VAR_1 == 0) {
     FUNC_0("ERROR line %d: number of cylinders not specified",
      VAR_0);
     VAR_8 = 0;
 }
     if (VAR_1 > 1024) {
     FUNC_0(
 "WARNING line %d: number of cylinders (%d) may be out-of-range\n    (must be within 1-1024 for normal BIOS operation, unless the entire disk\n    is dedicated to FreeBSD)",


      VAR_0, VAR_1);
 }

     if (VAR_3 == 0) {
     FUNC_0("ERROR line %d: number of heads not specified",
      VAR_0);
     VAR_8 = 0;
     } else if (VAR_3 > 256) {
     FUNC_0("ERROR line %d: number of heads must be within (1-256)",
      VAR_0);
     VAR_8 = 0;
 }

     if (VAR_4 == 0) {
     FUNC_0("ERROR line %d: number of sectors not specified",
      VAR_0);
     VAR_8 = 0;
     } else if (VAR_4 > 63) {
     FUNC_0("ERROR line %d: number of sectors must be within (1-63)",
      VAR_0);
     VAR_8 = 0;
 }

 break;
    }
    return (VAR_8);
}
