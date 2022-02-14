
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t4_i2c_data {int len; scalar_t__ port_id; int * data; int offset; int dev_addr; } ;
struct TYPE_2__ {scalar_t__ nports; } ;
struct adapter {int mbox; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,scalar_t__,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct adapter *VAR_4, struct t4_i2c_data *VAR_5)
{
 int VAR_6;

 if (VAR_5->len == 0 || VAR_5->port_id >= VAR_4->params.nports)
  return (VAR_1);

 if (VAR_5->len > sizeof(VAR_5->data))
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_4, ((void*)0), VAR_3 | VAR_2, "t4i2crd");
 if (VAR_6)
  return (VAR_6);
 VAR_6 = -FUNC_2(VAR_4, VAR_4->mbox, VAR_5->port_id, VAR_5->dev_addr,
     VAR_5->offset, VAR_5->len, &VAR_5->data[0]);
 FUNC_1(VAR_4, 0);

 return (VAR_6);
}
