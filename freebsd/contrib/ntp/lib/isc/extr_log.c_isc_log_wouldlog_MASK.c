
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int debug_level; TYPE_1__* logconfig; } ;
typedef TYPE_2__ isc_log_t ;
typedef int isc_boolean_t ;
struct TYPE_4__ {int highest_level; scalar_t__ dynamic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

isc_boolean_t
FUNC_1(isc_log_t *VAR_1, int VAR_2) {
 if (VAR_1 == ((void*)0) || VAR_1->logconfig == ((void*)0))
  return (VAR_0);

 return (FUNC_0(VAR_2 <= VAR_1->logconfig->highest_level ||
         (VAR_1->logconfig->dynamic &&
   VAR_2 <= VAR_1->debug_level)));
}
