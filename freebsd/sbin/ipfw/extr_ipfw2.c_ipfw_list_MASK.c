
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct format_opts {scalar_t__ first; scalar_t__ last; int show_counters; int show_time; int flags; } ;
typedef int sfo ;
typedef int ipfw_cfg_lheader ;
struct TYPE_4__ {int do_time; int do_dynamic; scalar_t__ do_pipe; scalar_t__ test_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int,char**,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct format_opts*,int **,size_t*) ;
 int FUNC_6 (TYPE_1__*,struct format_opts*,int *,size_t,int,char**) ;
 int FUNC_7 (struct format_opts*,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (char*,char**,int) ;

void
FUNC_9(int VAR_7, char *VAR_8[], int VAR_9)
{
 ipfw_cfg_lheader *VAR_10;
 struct format_opts VAR_11;
 size_t VAR_12;
 int VAR_13;
 int VAR_14;
 char **VAR_15;
 uint32_t VAR_16;
 char *VAR_17;

 if (VAR_5.test_only) {
  FUNC_3(VAR_6, "Testing only, list disabled\n");
  return;
 }
 if (VAR_5.do_pipe) {
  FUNC_0(VAR_7, VAR_8, VAR_9);
  return;
 }

 VAR_7--;
 VAR_8++;
 FUNC_7(&VAR_11, 0, sizeof(VAR_11));


 if (VAR_7 > 0) {
  for (VAR_14 = VAR_7, VAR_15 = VAR_8; VAR_14 != 0; VAR_14--) {
   VAR_16 = FUNC_8(*VAR_15++, &VAR_17, 10);
   if (VAR_11.first == 0 || VAR_16 < VAR_11.first)
    VAR_11.first = VAR_16;

   if (*VAR_17 == '-')
    VAR_16 = FUNC_8(VAR_17 + 1, &VAR_17, 10);
   if (VAR_11.last == 0 || VAR_16 > VAR_11.last)
    VAR_11.last = VAR_16;
  }
 }


 VAR_10 = ((void*)0);
 VAR_11.show_counters = VAR_9;
 VAR_11.show_time = VAR_5.do_time;
 if (VAR_5.do_dynamic != 2)
  VAR_11.flags |= VAR_4;
 if (VAR_5.do_dynamic != 0)
  VAR_11.flags |= VAR_3;
 if ((VAR_11.show_counters | VAR_11.show_time) != 0)
  VAR_11.flags |= VAR_2;
 if (FUNC_5(&VAR_5, &VAR_11, &VAR_10, &VAR_12) != 0)
  FUNC_1(VAR_1, "retrieving config failed");

 VAR_13 = FUNC_6(&VAR_5, &VAR_11, VAR_10, VAR_12, VAR_7, VAR_8);

 FUNC_4(VAR_10);

 if (VAR_13 != VAR_0)
  FUNC_2(VAR_13);
}
