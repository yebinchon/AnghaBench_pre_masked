
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct g_flashmap_slice {scalar_t__ sl_start; scalar_t__ sl_end; int sl_name; } ;


 int FUNC_0 (char*,int,int,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct g_flashmap_slice *VAR_0)
{

 FUNC_0("%08jx-%08jx: %s (%juKB)\n", (uintmax_t)VAR_0->sl_start,
     (uintmax_t)VAR_0->sl_end, VAR_0->sl_name,
     (uintmax_t)(VAR_0->sl_end - VAR_0->sl_start) / 1024);
}
