
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int (* mdio_read ) (int ,int ,int,int,unsigned int*) ;int addr; int adapter; } ;


 int FUNC_0 (int ,int ,int,int,unsigned int*) ;

__attribute__((used)) static inline int FUNC_1(struct cphy *VAR_0, int VAR_1, int VAR_2,
       unsigned int *VAR_3)
{
 return VAR_0->mdio_read(VAR_0->adapter, VAR_0->addr, VAR_1, VAR_2, VAR_3);
}
