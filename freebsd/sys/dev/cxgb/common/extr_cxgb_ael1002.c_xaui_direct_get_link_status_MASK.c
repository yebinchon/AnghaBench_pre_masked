
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int addr; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_9, int *VAR_10,
           int *VAR_11, int *VAR_12, int *VAR_13)
{
 if (VAR_10) {
  unsigned int VAR_14;
  adapter_t *VAR_15 = VAR_9->adapter;

  VAR_14 = FUNC_1(VAR_15,
         FUNC_0(VAR_0, VAR_9->addr)) |
    FUNC_1(VAR_15,
         FUNC_0(VAR_1, VAR_9->addr)) |
    FUNC_1(VAR_15,
         FUNC_0(VAR_2, VAR_9->addr)) |
    FUNC_1(VAR_15,
         FUNC_0(VAR_3, VAR_9->addr));
  *VAR_10 = VAR_14 & VAR_5 ? VAR_6 : VAR_7;
 }
 if (VAR_11)
  *VAR_11 = VAR_8;
 if (VAR_12)
  *VAR_12 = VAR_4;
 return 0;
}
