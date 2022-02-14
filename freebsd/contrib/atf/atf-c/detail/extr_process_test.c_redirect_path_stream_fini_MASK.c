
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_type; int m_sb; } ;
struct redirect_path_stream {TYPE_1__ m_base; int m_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
void
FUNC_3(void *VAR_0)
{
    struct redirect_path_stream *VAR_1 = VAR_0;

    FUNC_1(&VAR_1->m_base.m_sb);

    FUNC_0(&VAR_1->m_path);

    FUNC_2(VAR_1->m_base.m_type);
}
