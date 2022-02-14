
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spc {unsigned char flags; unsigned char mylevel; void* val; } ;
typedef void* cc_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned char,void*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 struct spc* VAR_8 ;

void
FUNC_5(unsigned char *VAR_9, int VAR_10)
{
 struct spc *VAR_11;
 int VAR_12,VAR_13;

 FUNC_3();

 for (; VAR_10 >= 3; VAR_10 -=3, VAR_9 +=3) {

  VAR_12 = VAR_9[VAR_4];

  if (VAR_12 == 0) {



   continue;
  }
  if (VAR_12 > VAR_0) {
   if ((VAR_9[VAR_3] & VAR_5) != VAR_6)
    FUNC_1(VAR_12, VAR_6, 0);
   continue;
  }

  VAR_11 = &VAR_8[VAR_12];

  VAR_13 = VAR_9[VAR_3]&(VAR_5|VAR_1);

  if ((VAR_9[VAR_7] == (unsigned char)VAR_11->val) &&
      ((VAR_13&VAR_5) == (VAR_11->flags&VAR_5))) {
   continue;
  }

  if (VAR_13 == (VAR_2|VAR_1)) {






   VAR_9[VAR_3] &= ~VAR_1;
  }

  if (VAR_13 == ((VAR_11->flags&VAR_5)|VAR_1)) {
   VAR_11->val = (cc_t)VAR_9[VAR_7];
   VAR_11->flags = VAR_9[VAR_3];
   continue;
  }

  VAR_13 &= ~VAR_1;

  if (VAR_13 <= (VAR_11->mylevel&VAR_5)) {
   VAR_11->flags = VAR_9[VAR_3]|VAR_1;
   VAR_11->val = (cc_t)VAR_9[VAR_7];
  }
  if (VAR_13 == VAR_2) {
   if ((VAR_11->mylevel&VAR_5) != VAR_2)
    VAR_11->flags = VAR_11->mylevel;
   else
    VAR_11->flags = VAR_6;
  }
  FUNC_1(VAR_12, VAR_11->flags, VAR_11->val);
 }
 FUNC_2();
 if (FUNC_4())
  FUNC_0(1);
}
