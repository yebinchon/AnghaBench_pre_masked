
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_entry_data {char* topic; int * outfp; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, char *VAR_1, const char *VAR_2,
        char *VAR_3, char *VAR_4,
        char *VAR_5, char *VAR_6, char *VAR_7,
        char *VAR_8,
        char *VAR_9, char *VAR_10)
{
 struct perf_entry_data *VAR_11 = VAR_0;
 FILE *VAR_12 = VAR_11->outfp;
 char *VAR_13 = VAR_11->topic;





 FUNC_0(VAR_12, "{\n");

 if (VAR_1)
  FUNC_0(VAR_12, "\t.name = \"%s\",\n", VAR_1);
 if (VAR_2)
  FUNC_0(VAR_12, "\t.event = \"%s\",\n", VAR_2);
 FUNC_0(VAR_12, "\t.desc = \"%s\",\n", VAR_3);
 FUNC_0(VAR_12, "\t.topic = \"%s\",\n", VAR_13);
 if (VAR_4 && VAR_4[0])
  FUNC_0(VAR_12, "\t.long_desc = \"%s\",\n", VAR_4);
 if (VAR_5)
  FUNC_0(VAR_12, "\t.pmu = \"%s\",\n", VAR_5);
 if (VAR_6)
  FUNC_0(VAR_12, "\t.unit = \"%s\",\n", VAR_6);
 if (VAR_7)
  FUNC_0(VAR_12, "\t.perpkg = \"%s\",\n", VAR_7);
 if (VAR_8)
  FUNC_0(VAR_12, "\t.metric_expr = \"%s\",\n", VAR_8);
 if (VAR_9)
  FUNC_0(VAR_12, "\t.metric_name = \"%s\",\n", VAR_9);
 if (VAR_10)
  FUNC_0(VAR_12, "\t.metric_group = \"%s\",\n", VAR_10);
 FUNC_0(VAR_12, "},\n");

 return 0;
}
