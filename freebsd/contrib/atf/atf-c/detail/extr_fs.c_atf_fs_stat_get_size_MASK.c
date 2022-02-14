
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {int st_size; } ;
struct TYPE_5__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ atf_fs_stat_t ;



off_t
FUNC_0(const atf_fs_stat_t *VAR_0)
{
    return VAR_0->m_sb.st_size;
}
