
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_4__ {char* buffer; char* cursor; } ;
struct TYPE_5__ {TYPE_1__ el_line; } ;
typedef TYPE_2__ EditLine ;


 char* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static char *
FUNC_3(EditLine * VAR_0, const char *VAR_1, int VAR_2,
  const char *(*VAR_3)(const char *))
{
 size_t VAR_4 = 0;
 size_t VAR_5 = 0;
 size_t VAR_6 = 0;
 size_t VAR_7;
 const char *VAR_8;
 char VAR_9;
 size_t VAR_10 = 0;
 size_t VAR_11 = 0;
 char *VAR_12;
 wchar_t *VAR_13 = VAR_0->el_line.buffer;
 const char *VAR_14 = ((void*)0);

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 while (VAR_13 != VAR_0->el_line.cursor) {




  if (VAR_13[0] == '\'' && !VAR_11)
   VAR_10 = !VAR_10;



  else if (VAR_13[0] == '"' && !VAR_10)
   VAR_11 = !VAR_11;
  VAR_13++;
 }




 for (VAR_8 = VAR_1; *VAR_8; VAR_8++, VAR_4++) {
  VAR_9 = *VAR_8;

  if (VAR_10 && VAR_9 == '\'') {
   VAR_5 += 3;
   continue;
  }

  if (VAR_11 && FUNC_1(VAR_9)) {
   VAR_5++;
   continue;
  }
  if (!VAR_10 && !VAR_11 && FUNC_2(VAR_9))
   VAR_5++;
 }

 VAR_7 = VAR_4 + VAR_5 + 1;
 if (VAR_10 || VAR_11)
  VAR_7++;

 if (VAR_2 && VAR_3)
  VAR_7++;

 if ((VAR_12 = FUNC_0(VAR_7)) == ((void*)0))
  return ((void*)0);

 for (VAR_8 = VAR_1; *VAR_8; VAR_8++) {
  VAR_9 = *VAR_8;
  if (!FUNC_2(VAR_9)) {

   VAR_12[VAR_6++] = VAR_9;
   continue;
  }


  if (VAR_9 == '\'' && VAR_10) {
   VAR_12[VAR_6++] = '\'';
   VAR_12[VAR_6++] = '\\';
   VAR_12[VAR_6++] = '\'';
   VAR_12[VAR_6++] = '\'';
   continue;
  }


  if (VAR_10) {
   VAR_12[VAR_6++] = VAR_9;
   continue;
  }




  if (VAR_11 && !FUNC_1(VAR_9)) {
   VAR_12[VAR_6++] = VAR_9;
   continue;
  }


  VAR_12[VAR_6++] = '\\';
  VAR_12[VAR_6++] = VAR_9;
 }

 if (VAR_2 && VAR_3) {
  VAR_12[VAR_6] = 0;
  VAR_14 = VAR_3(VAR_12);

  if (VAR_14[0] == ' ') {
   if (!VAR_10 && !VAR_11)
    VAR_12[VAR_6++] = VAR_14[0];
  } else
   VAR_12[VAR_6++] = VAR_14[0];
 }


 if (VAR_2 && (VAR_14 && VAR_14[0] == ' ')) {
  if (VAR_10)
   VAR_12[VAR_6++] = '\'';
  else if (VAR_11)
   VAR_12[VAR_6++] = '"';
 }

 VAR_12[VAR_6] = 0;
 return VAR_12;
}
