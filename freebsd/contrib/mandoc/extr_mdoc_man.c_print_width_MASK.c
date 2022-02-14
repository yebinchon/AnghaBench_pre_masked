
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffsu {scalar_t__ unit; int scale; } ;
struct roff_node {scalar_t__ type; char* string; } ;
struct mdoc_bl {char* width; scalar_t__ type; int count; } ;
typedef int buf ;


 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*,struct roffsu*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_6(const struct mdoc_bl *VAR_9, const struct roff_node *VAR_10)
{
 char VAR_11[24];
 struct roffsu VAR_12;
 const char *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_14 = 1;
 VAR_15 = 0;


 if (VAR_9->width == ((void*)0))
  VAR_16 = (VAR_9->type == VAR_3) ? 6 : 0;
 else {
  VAR_13 = FUNC_0(VAR_9->width, &VAR_12, VAR_7);
  if (VAR_13 == ((void*)0) || *VAR_13 != '\0')
   VAR_16 = FUNC_1(VAR_9->width);
  else if (VAR_6 == VAR_12.unit)
   VAR_16 = VAR_12.scale;
  else {
   VAR_16 = 0;
   VAR_14 = 0;
  }
 }


 if (VAR_9->type == VAR_2)
  VAR_17 = (VAR_9->count > 8) + 1;
 else if (VAR_10 != ((void*)0) && VAR_10->type == VAR_5)
  VAR_17 = FUNC_1(VAR_10->string);
 else
  VAR_17 = 0;


 FUNC_2();





 VAR_0[VAR_1++] = VAR_16 + 2;


 if (VAR_17 > VAR_16 && VAR_9->type != VAR_4)
  FUNC_3(".HP", 0);
 else {
  FUNC_3(".TP", 0);
  VAR_15 = VAR_16 + 2;
 }
 if (VAR_14) {
  (void)FUNC_5(VAR_11, sizeof(VAR_11), "%dn", VAR_16 + 2);
  FUNC_4(VAR_11);
 } else
  FUNC_4(VAR_9->width);
 VAR_8 = VAR_15;
}
