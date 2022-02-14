
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hrtime_t ;
typedef int dtrace_optval_t ;
struct TYPE_4__ {int* dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(dtrace_hdl_t *VAR_6, const char *VAR_7, uintptr_t VAR_8)
{
 char *VAR_9;
 int VAR_10;
 dtrace_optval_t VAR_11 = 1, VAR_12 = 0;

 const struct {
  char *name;
  hrtime_t mul;
 } VAR_13[] = {
  { "ns", VAR_3 / VAR_3 },
  { "nsec", VAR_3 / VAR_3 },
  { "us", VAR_3 / VAR_1 },
  { "usec", VAR_3 / VAR_1 },
  { "ms", VAR_3 / VAR_2 },
  { "msec", VAR_3 / VAR_2 },
  { "s", VAR_3 / VAR_4 },
  { "sec", VAR_3 / VAR_4 },
  { "m", VAR_3 * (hrtime_t)60 },
  { "min", VAR_3 * (hrtime_t)60 },
  { "h", VAR_3 * (hrtime_t)60 * (hrtime_t)60 },
  { "hour", VAR_3 * (hrtime_t)60 * (hrtime_t)60 },
  { "d", VAR_3 * (hrtime_t)(24 * 60 * 60) },
  { "day", VAR_3 * (hrtime_t)(24 * 60 * 60) },
  { "hz", 0 },
  { ((void*)0) }
 };

 if (VAR_7 != ((void*)0)) {
  VAR_5 = 0;
  VAR_12 = FUNC_2(VAR_7, &VAR_9, 0);

  for (VAR_10 = 0; VAR_13[VAR_10].name != ((void*)0); VAR_10++) {
   if (FUNC_1(VAR_13[VAR_10].name, VAR_9) == 0) {
    VAR_11 = VAR_13[VAR_10].mul;
    break;
   }
  }

  if (VAR_13[VAR_10].name == ((void*)0) && *VAR_9 != '\0' || VAR_12 < 0)
   return (FUNC_0(VAR_6, VAR_0));

  if (VAR_11 == 0) {



   if (VAR_12 != 0)
    VAR_12 = VAR_3 / VAR_12;
  } else {
   VAR_12 *= VAR_11;
  }
 }

 VAR_6->dt_options[VAR_8] = VAR_12;
 return (0);
}
