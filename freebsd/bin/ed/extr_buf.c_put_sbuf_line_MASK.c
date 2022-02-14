
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {size_t len; size_t seek; } ;
typedef TYPE_1__ line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (char const*,int,size_t,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 char* FUNC_7 (int ) ;

const char *
FUNC_8(const char *VAR_8)
{
 line_t *VAR_9;
 size_t VAR_10;
 const char *VAR_11;

 if ((VAR_9 = (line_t *) FUNC_6(sizeof(line_t))) == ((void*)0)) {
  FUNC_1(VAR_7, "%s\n", FUNC_7(VAR_3));
  VAR_2 = "out of memory";
  return ((void*)0);
 }

 for (VAR_11 = VAR_8; *VAR_11 != '\n'; VAR_11++)
  ;
 if (VAR_11 - VAR_8 >= VAR_0) {
  VAR_2 = "line too long";
  FUNC_2(VAR_9);
  return ((void*)0);
 }
 VAR_10 = VAR_11 - VAR_8;

 if (VAR_4) {
  if (FUNC_3(VAR_5, (off_t)0, VAR_1) < 0) {
   FUNC_1(VAR_7, "%s\n", FUNC_7(VAR_3));
   VAR_2 = "cannot seek temp file";
   FUNC_2(VAR_9);
   return ((void*)0);
  }
  VAR_6 = FUNC_4(VAR_5);
  VAR_4 = 0;
 }

 if (FUNC_5(VAR_8, sizeof(char), VAR_10, VAR_5) != VAR_10) {
  VAR_6 = -1;
  FUNC_1(VAR_7, "%s\n", FUNC_7(VAR_3));
  VAR_2 = "cannot write temp file";
  FUNC_2(VAR_9);
  return ((void*)0);
 }
 VAR_9->len = VAR_10;
 VAR_9->seek = VAR_6;
 FUNC_0(VAR_9);
 VAR_6 += VAR_10;
 return ++VAR_11;
}
