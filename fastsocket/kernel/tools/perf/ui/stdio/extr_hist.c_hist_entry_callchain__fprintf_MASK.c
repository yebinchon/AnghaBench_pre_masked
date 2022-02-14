
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int period; } ;
struct hist_entry {int sorted_chain; TYPE_1__ stat; } ;
struct TYPE_4__ {int mode; } ;
typedef int FILE ;






 size_t FUNC_0 (int *,int *,int ) ;
 size_t FUNC_1 (int *,int *,int ,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static size_t FUNC_3(struct hist_entry *VAR_1,
         u64 VAR_2, int VAR_3,
         FILE *VAR_4)
{
 switch (VAR_0.mode) {
 case 129:
  return FUNC_1(VAR_4, &VAR_1->sorted_chain, VAR_1->stat.period,
      VAR_3);
  break;
 case 130:
  return FUNC_1(VAR_4, &VAR_1->sorted_chain, VAR_2,
      VAR_3);
  break;
 case 131:
  return FUNC_0(VAR_4, &VAR_1->sorted_chain, VAR_2);
  break;
 case 128:
  break;
 default:
  FUNC_2("Bad callchain mode\n");
 }

 return 0;
}
