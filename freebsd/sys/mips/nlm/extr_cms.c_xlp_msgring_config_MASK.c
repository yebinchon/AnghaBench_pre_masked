
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,int ,int *,int *,int ,int ,void**) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_6(void *VAR_13)
{
 void *VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17;


 if (FUNC_3())
  VAR_8 = 1;


 if (VAR_8)
  VAR_11 -= 1;

 FUNC_2(&VAR_6, "msgring", ((void*)0), VAR_3);
 if (VAR_12 < VAR_11)
  VAR_11 = VAR_12;
 VAR_15 = ((1 << VAR_11) - 1);
 VAR_16 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {
  VAR_16 <<= VAR_5;
  VAR_16 |= VAR_15;
 }
 VAR_10 = VAR_9 & VAR_16;




 FUNC_5(VAR_0);
 FUNC_1(0);
 FUNC_0("msgring", VAR_7, ((void*)0),
     ((void*)0), VAR_2, VAR_1, &VAR_14);
}
