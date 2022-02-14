
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparse {scalar_t__ type; size_t size; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int buff ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,size_t) ;
 scalar_t__ FUNC_3 (int,size_t,int ) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (char const*,int,int) ;
 scalar_t__ FUNC_6 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_5, const struct sparse *VAR_6)
{
 char VAR_7[1024];
 int VAR_8;
 size_t VAR_9 = 0;
 const struct sparse *VAR_10 = VAR_6;

 FUNC_4(VAR_7, ' ', sizeof(VAR_7));
 FUNC_0((VAR_8 = FUNC_5(VAR_5, VAR_2 | VAR_3, 0600)) != -1);


 while (VAR_10->type != VAR_0) {
  VAR_9 += VAR_10->size;
  ++VAR_10;
 }
 FUNC_0(FUNC_2(VAR_8, VAR_9) != -1);

 while (VAR_6->type != VAR_0) {
  if (VAR_6->type == VAR_1) {
   FUNC_0(FUNC_3(VAR_8, VAR_6->size, VAR_4) != (off_t)-1);
  } else {
   size_t VAR_11, VAR_12;

   VAR_12 = VAR_6->size;
   while (VAR_12) {
    if (VAR_12 > sizeof(VAR_7))
     VAR_11 = sizeof(VAR_7);
    else
     VAR_11 = VAR_12;
    FUNC_0(FUNC_6(VAR_8, VAR_7, VAR_11) != (ssize_t)-1);
    VAR_12 -= VAR_11;
   }
  }
  VAR_6++;
 }
 FUNC_1(VAR_8);
}
