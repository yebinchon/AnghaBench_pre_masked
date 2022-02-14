
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seek; size_t len; } ;
typedef TYPE_1__ line_t ;


 int FUNC_0 (char*,size_t,size_t,int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 size_t FUNC_2 (char*,int,size_t,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_4 (int ) ;

char *
FUNC_5(line_t *VAR_8)
{
 static char *VAR_9 = ((void*)0);
 static size_t VAR_10;

 size_t VAR_11;

 if (VAR_8 == &VAR_1)
  return ((void*)0);
 VAR_4 = 1;

 if (VAR_6 != VAR_8->seek) {
  VAR_6 = VAR_8->seek;
  if (FUNC_3(VAR_5, VAR_6, VAR_0) < 0) {
   FUNC_1(VAR_7, "%s\n", FUNC_4(VAR_3));
   VAR_2 = "cannot seek temp file";
   return ((void*)0);
  }
 }
 VAR_11 = VAR_8->len;
 FUNC_0(VAR_9, VAR_10, VAR_11 + 1, ((void*)0));
 if (FUNC_2(VAR_9, sizeof(char), VAR_11, VAR_5) != VAR_11) {
  FUNC_1(VAR_7, "%s\n", FUNC_4(VAR_3));
  VAR_2 = "cannot read temp file";
  return ((void*)0);
 }
 VAR_6 += VAR_11;
 VAR_9[VAR_11] = '\0';
 return VAR_9;
}
