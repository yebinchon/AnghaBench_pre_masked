
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm {unsigned long scan_color; unsigned int scan_alignment; unsigned long scan_size; int * prev_scanned_node; scalar_t__ scan_check_range; scalar_t__ scan_hit_end; scalar_t__ scan_hit_start; scalar_t__ scanned_blocks; } ;



void FUNC_0(struct drm_mm *VAR_0,
        unsigned long VAR_1,
        unsigned VAR_2,
        unsigned long VAR_3)
{
 VAR_0->scan_color = VAR_3;
 VAR_0->scan_alignment = VAR_2;
 VAR_0->scan_size = VAR_1;
 VAR_0->scanned_blocks = 0;
 VAR_0->scan_hit_start = 0;
 VAR_0->scan_hit_end = 0;
 VAR_0->scan_check_range = 0;
 VAR_0->prev_scanned_node = ((void*)0);
}
