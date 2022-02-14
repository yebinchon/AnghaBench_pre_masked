
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mdio_ops {int write; int read; } ;
struct cphy_ops {int dummy; } ;
struct cphy {unsigned int caps; char const* desc; int mdio_write; int mdio_read; struct cphy_ops* ops; int * pinfo; int * adapter; scalar_t__ addr; } ;
typedef int pinfo_t ;
typedef int adapter_t ;



__attribute__((used)) static inline void FUNC_0(struct cphy *VAR_0, adapter_t *VAR_1, pinfo_t *VAR_2,
        int VAR_3, struct cphy_ops *VAR_4,
        const struct mdio_ops *VAR_5, unsigned int VAR_6,
        const char *VAR_7)
{
 VAR_0->addr = (u8)VAR_3;
 VAR_0->caps = VAR_6;
 VAR_0->adapter = VAR_1;
 VAR_0->pinfo = VAR_2;
 VAR_0->desc = VAR_7;
 VAR_0->ops = VAR_4;
 if (VAR_5) {
  VAR_0->mdio_read = VAR_5->read;
  VAR_0->mdio_write = VAR_5->write;
 }
}
