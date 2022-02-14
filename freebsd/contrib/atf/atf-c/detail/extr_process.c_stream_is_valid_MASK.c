
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ m_type; } ;
typedef TYPE_1__ atf_process_stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static
bool
FUNC_0(const atf_process_stream_t *VAR_5)
{
    return (VAR_5->m_type == VAR_0) ||
           (VAR_5->m_type == VAR_1) ||
           (VAR_5->m_type == VAR_2) ||
           (VAR_5->m_type == VAR_3) ||
           (VAR_5->m_type == VAR_4);
}
