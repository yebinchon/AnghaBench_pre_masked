
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* buf; scalar_t__ fd; TYPE_1__* strpush; } ;
struct TYPE_3__ {int * ap; } ;
typedef int HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int *,int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char*,char*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

int
FUNC_7(void)
{
 char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 char VAR_18;

 while (VAR_8->strpush) {





  if (VAR_11 == -1 && VAR_8->strpush->ap != ((void*)0))
   return ' ';
  FUNC_3();
  if (--VAR_11 >= 0)
   return (*VAR_10++);
 }
 if (VAR_11 == VAR_0 || VAR_8->buf == ((void*)0))
  return VAR_5;

again:
 if (VAR_9 <= 0) {
  if ((VAR_9 = FUNC_4()) == -1) {
   VAR_9 = VAR_11 = VAR_0;
   return VAR_5;
  }
 }

 VAR_14 = VAR_8->buf + (VAR_10 - VAR_8->buf);
 VAR_17 = VAR_14 + VAR_9;
 *VAR_17 = '\0';
 VAR_15 = FUNC_5(VAR_14, '\n');
 if (VAR_15 != VAR_17 && *VAR_15 == '\0') {

  for (VAR_16 = VAR_15; VAR_15 != VAR_17; VAR_15++) {
   if (*VAR_15 != '\0')
    *VAR_16++ = *VAR_15;
  }
  VAR_9 -= VAR_17 - VAR_16;
  if (VAR_9 == 0)
   goto again;
  VAR_17 = VAR_14 + VAR_9;
  *VAR_17 = '\0';
  VAR_15 = FUNC_5(VAR_14, '\n');
 }
 if (VAR_15 == VAR_17) {
  VAR_11 = VAR_9;
  VAR_9 = 0;
 } else {
  VAR_15++;
  VAR_11 = VAR_15 - VAR_10;
  VAR_9 -= VAR_11;
 }
 VAR_11--;

 VAR_18 = *VAR_15;
 *VAR_15 = '\0';


 if (VAR_8->fd == 0 && VAR_6 &&
     VAR_10[FUNC_6(VAR_10, " \t\n")] != '\0') {
  HistEvent VAR_19;
  VAR_3;
  FUNC_1(VAR_6, &VAR_19, VAR_13 == 1 ? VAR_2 : VAR_1,
      VAR_10);
  VAR_4;
 }


 if (VAR_12) {
  FUNC_2(VAR_10);
  FUNC_0(VAR_7);
 }

 *VAR_15 = VAR_18;

 return *VAR_10++;
}
