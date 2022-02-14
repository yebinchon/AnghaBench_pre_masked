
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_11__ {scalar_t__ type; } ;
typedef TYPE_2__ isc_logchannel_t ;
struct TYPE_10__ {size_t length; char* name; } ;
struct TYPE_12__ {TYPE_1__ entry; } ;
typedef TYPE_3__ isc_dir_t ;


 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char**,int) ;

__attribute__((used)) static isc_result_t
FUNC_11(isc_logchannel_t *VAR_2, int *VAR_3) {

 char *VAR_4, *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8 = -1;
 size_t VAR_9;
 isc_dir_t VAR_10;
 isc_result_t VAR_11;
 char VAR_12 = '/';




 FUNC_2(VAR_2->type == VAR_0);





 VAR_4 = FUNC_9(FUNC_1(VAR_2), VAR_12);
 if (VAR_4 != ((void*)0)) {
  *VAR_4++ = '\0';
  VAR_6 = FUNC_1(VAR_2);
 } else {
  FUNC_0(FUNC_1(VAR_2), VAR_4);
  VAR_6 = ".";
 }
 VAR_9 = FUNC_7(VAR_4);

 FUNC_4(&VAR_10);
 VAR_11 = FUNC_5(&VAR_10, VAR_6);




 if (VAR_4 != FUNC_1(VAR_2))
  *(VAR_4 - 1) = VAR_12;




 if (VAR_11 != VAR_1)
  return (VAR_11);

 while (FUNC_6(&VAR_10) == VAR_1) {
  if (VAR_10.entry.length > VAR_9 &&
      FUNC_8(VAR_10.entry.name, VAR_4, VAR_9) == 0 &&
      VAR_10.entry.name[VAR_9] == '.') {

   VAR_7 = FUNC_10(&VAR_10.entry.name[VAR_9 + 1],
      &VAR_5, 10);
   if (*VAR_5 == '\0' && VAR_7 > VAR_8)
    VAR_8 = VAR_7;
  }
 }
 FUNC_3(&VAR_10);

 *VAR_3 = ++VAR_8;

 return (VAR_1);
}
