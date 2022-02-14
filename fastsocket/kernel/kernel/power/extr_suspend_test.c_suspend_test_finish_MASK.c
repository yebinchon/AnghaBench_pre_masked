
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,unsigned int) ;
 int FUNC_1 (long) ;
 long VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,unsigned int,unsigned int) ;
 long VAR_2 ;

void FUNC_4(const char *VAR_3)
{
 long VAR_4 = VAR_1 - VAR_2;
 unsigned VAR_5;

 VAR_5 = FUNC_2(FUNC_1(VAR_4));
 FUNC_3("PM: %s took %d.%03d seconds\n", VAR_3,
   VAR_5 / 1000, VAR_5 % 1000);
 FUNC_0(VAR_5 > (VAR_0 * 1000),
      "Component: %s, time: %u\n", VAR_3, VAR_5);
}
