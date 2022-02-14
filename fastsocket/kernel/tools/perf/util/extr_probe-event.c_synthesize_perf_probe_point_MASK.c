
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_point {char* file; scalar_t__ retprobe; int function; int line; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static char *FUNC_7(struct perf_probe_point *VAR_2)
{
 char *VAR_3, *VAR_4;
 char VAR_5[32] = "", VAR_6[32] = "", VAR_7[32] = "";
 int VAR_8, VAR_9;

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto error;
 }
 if (VAR_2->offset) {
  VAR_8 = FUNC_0(VAR_5, 32, "+%lu", VAR_2->offset);
  if (VAR_8 <= 0)
   goto error;
 }
 if (VAR_2->line) {
  VAR_8 = FUNC_0(VAR_6, 32, ":%d", VAR_2->line);
  if (VAR_8 <= 0)
   goto error;
 }
 if (VAR_2->file) {
  VAR_4 = VAR_2->file;
  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 > 30) {
   VAR_4 = FUNC_3(VAR_2->file + VAR_9 - 30, '/');
   VAR_4 = VAR_4 ? VAR_4 + 1 : VAR_2->file + VAR_9 - 30;
  }
  VAR_8 = FUNC_0(VAR_7, 32, "@%s", VAR_4);
  if (VAR_8 <= 0)
   goto error;
 }

 if (VAR_2->function)
  VAR_8 = FUNC_0(VAR_3, VAR_1, "%s%s%s%s%s", VAR_2->function,
     VAR_5, VAR_2->retprobe ? "%return" : "", VAR_6,
     VAR_7);
 else
  VAR_8 = FUNC_0(VAR_3, VAR_1, "%s%s", VAR_7, VAR_6);
 if (VAR_8 <= 0)
  goto error;

 return VAR_3;
error:
 FUNC_2("Failed to synthesize perf probe point: %s\n",
   FUNC_4(-VAR_8));
 if (VAR_3)
  FUNC_1(VAR_3);
 return ((void*)0);
}
