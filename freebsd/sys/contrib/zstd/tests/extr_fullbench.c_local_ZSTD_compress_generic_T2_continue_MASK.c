
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t pos; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {size_t size; scalar_t__ pos; void const* src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t
FUNC_2(const void* VAR_4, size_t VAR_5,
                                        void* VAR_6, size_t VAR_7,
                                        void* VAR_8)
{
    ZSTD_outBuffer VAR_9;
    ZSTD_inBuffer VAR_10;
    (void)VAR_8;
    FUNC_0(VAR_3, VAR_0, 2);
    VAR_9.dst = VAR_6;
    VAR_9.size = VAR_7;
    VAR_9.pos = 0;
    VAR_10.src = VAR_4;
    VAR_10.size = VAR_5;
    VAR_10.pos = 0;
    FUNC_1(VAR_3, &VAR_9, &VAR_10, VAR_1);
    while(FUNC_1(VAR_3, &VAR_9, &VAR_10, VAR_2)) {}
    return VAR_9.pos;
}
