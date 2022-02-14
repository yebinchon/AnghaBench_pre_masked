
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int initstat; } ;
typedef TYPE_1__ fa ;
struct TYPE_7__ {char* sval; int tval; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 TYPE_4__** VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char const*) ;
 int VAR_6 ;
 char const* VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (char*) ;

int FUNC_11(const char *VAR_9, const char *VAR_10)
{


 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 fa *VAR_15;

 VAR_14 = FUNC_8(VAR_9);
 if (VAR_14 > VAR_4) {
  FUNC_10(VAR_3);
  if ((VAR_3 = (char *) FUNC_5(VAR_14+1)) == ((void*)0))
   FUNC_0("out of space for fields in refldbld %d", VAR_14);
  VAR_4 = VAR_14;
 }
 VAR_11 = VAR_3;
 *VAR_11 = '\0';
 if (*VAR_9 == '\0')
  return 0;
 VAR_15 = FUNC_4(VAR_10, 1);
    FUNC_1( ("into refldbld, rec = <%s>, pat = <%s>\n", VAR_9, VAR_10) );
 VAR_13 = VAR_15->initstat;
 for (VAR_12 = 1; ; VAR_12++) {
  if (VAR_12 > VAR_6)
   FUNC_3(VAR_12);
  if (FUNC_2(VAR_5[VAR_12]))
   FUNC_10(VAR_5[VAR_12]->sval);
  VAR_5[VAR_12]->tval = VAR_1 | VAR_2 | VAR_0;
  VAR_5[VAR_12]->sval = VAR_11;
     FUNC_1( ("refldbld: i=%d\n", VAR_12) );
  if (FUNC_6(VAR_15, VAR_9)) {
   VAR_15->initstat = 2;
      FUNC_1( ("match %s (%d chars)\n", VAR_7, VAR_8) );
   FUNC_9(VAR_11, VAR_9, VAR_7-VAR_9);
   VAR_11 += VAR_7 - VAR_9 + 1;
   *(VAR_11-1) = '\0';
   VAR_9 = VAR_7 + VAR_8;
  } else {
      FUNC_1( ("no match %s\n", VAR_9) );
   FUNC_7(VAR_11, VAR_9);
   VAR_15->initstat = VAR_13;
   break;
  }
 }
 return VAR_12;
}
