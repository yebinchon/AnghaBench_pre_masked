
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_textbuf_t ;
struct TYPE_3__ {int hw; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_2(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(&(VAR_2->hw), VAR_1, &VAR_5);

 FUNC_1(VAR_4, VAR_0, "current_speed", "%d", VAR_5);
}
