
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int location_t ;
struct TYPE_4__ {int (* init ) (char const*) ;} ;
struct TYPE_3__ {scalar_t__ (* init ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 char const* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12 (const char *VAR_8)
{
  location_t VAR_9 = VAR_6;
  if (VAR_3 == 0)
    VAR_3 = VAR_8 && VAR_8[0] ? VAR_8 : "gccdump";





  VAR_4 = "<built-in>";
  VAR_5 = 0;

  if (VAR_7.init () == 0)
    return 0;
  VAR_6 = VAR_9;

  FUNC_3 (VAR_8);



  FUNC_5 ();
  FUNC_7 ();



  FUNC_4 ();
  FUNC_6 ();
  FUNC_2 ();



  FUNC_11 (VAR_1);
  (*VAR_2->init) (VAR_8);

  FUNC_10 (VAR_1);

  return 1;
}
