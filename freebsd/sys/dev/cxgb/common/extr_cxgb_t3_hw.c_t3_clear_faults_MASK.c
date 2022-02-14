
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct cmac {scalar_t__ offset; } ;
struct port_info {int port_id; struct cmac mac; } ;
struct TYPE_10__ {int nports; } ;
struct TYPE_11__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct port_info* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(adapter_t *VAR_4, int VAR_5)
{
 struct port_info *VAR_6 = FUNC_0(VAR_4, VAR_5);
 struct cmac *VAR_7 = &VAR_6->mac;

 if (VAR_4->params.nports <= 2) {
  FUNC_4(VAR_4, VAR_6->port_id);
  FUNC_1(VAR_4, VAR_2 + VAR_7->offset);
  FUNC_3(VAR_4, VAR_0 + VAR_7->offset, VAR_3);
  FUNC_2(VAR_4, VAR_1 + VAR_7->offset,
     VAR_3, VAR_3);
  FUNC_5(VAR_4, VAR_6->port_id);
 }
}
