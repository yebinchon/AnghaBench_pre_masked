
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysinit**,int ) ;
 struct sysinit** FUNC_1 (int,int ,int ) ;
 struct sysinit** VAR_2 ;
 struct sysinit** VAR_3 ;
 int FUNC_2 (char*) ;
 struct sysinit** VAR_4 ;
 struct sysinit** VAR_5 ;

void
FUNC_3(struct sysinit **VAR_6, struct sysinit **VAR_7)
{
 struct sysinit **VAR_8;
 struct sysinit **VAR_9;
 struct sysinit **VAR_10;
 int VAR_11;

 VAR_11 = VAR_7 - VAR_6;
 if (VAR_2)
  VAR_11 += VAR_3 - VAR_2;
 else
  VAR_11 += VAR_5 - VAR_4;
 VAR_8 = FUNC_1(VAR_11 * sizeof(*VAR_9), VAR_1, VAR_0);
 if (VAR_8 == ((void*)0))
  FUNC_2("cannot malloc for sysinit");
 VAR_10 = VAR_8;
 if (VAR_2)
  for (VAR_9 = VAR_2; VAR_9 < VAR_3; VAR_9++)
   *VAR_10++ = *VAR_9;
 else
  for (VAR_9 = VAR_4; VAR_9 < VAR_5; VAR_9++)
   *VAR_10++ = *VAR_9;
 for (VAR_9 = VAR_6; VAR_9 < VAR_7; VAR_9++)
  *VAR_10++ = *VAR_9;
 if (VAR_2)
  FUNC_0(VAR_2, VAR_1);
 VAR_2 = VAR_8;
 VAR_3 = VAR_8 + VAR_11;
}
