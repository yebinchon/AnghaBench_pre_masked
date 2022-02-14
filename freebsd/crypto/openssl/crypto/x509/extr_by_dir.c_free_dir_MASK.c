
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ method_data; } ;
typedef TYPE_1__ X509_LOOKUP ;
struct TYPE_6__ {int lock; int buffer; int dirs; } ;
typedef TYPE_2__ BY_DIR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(X509_LOOKUP *VAR_1)
{
    BY_DIR *VAR_2 = (BY_DIR *)VAR_1->method_data;

    FUNC_3(VAR_2->dirs, VAR_0);
    FUNC_0(VAR_2->buffer);
    FUNC_1(VAR_2->lock);
    FUNC_2(VAR_2);
}
