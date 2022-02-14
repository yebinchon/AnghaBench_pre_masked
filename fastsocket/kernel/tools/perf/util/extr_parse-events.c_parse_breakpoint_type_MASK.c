
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int bp_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(const char *VAR_4, struct perf_event_attr *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  if (!VAR_4 || !VAR_4[VAR_6])
   break;
  switch (VAR_4[VAR_6]) {
  case 'r':
   do { if (VAR_5->bp_type & VAR_1) return -VAR_0; else VAR_5->bp_type |= VAR_1; } while (0);
   break;
  case 'w':
   do { if (VAR_5->bp_type & VAR_2) return -VAR_0; else VAR_5->bp_type |= VAR_2; } while (0);
   break;
  case 'x':
   do { if (VAR_5->bp_type & VAR_3) return -VAR_0; else VAR_5->bp_type |= VAR_3; } while (0);
   break;
  default:
   return -VAR_0;
  }
 }



 if (!VAR_5->bp_type)
  VAR_5->bp_type = VAR_1 | VAR_2;

 return 0;
}
