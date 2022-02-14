
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {double dot_clock; double htotal; double vtotal; int hdisplay; int vdisplay; int hsync_start; int hsync_end; int vsync_start; int vsync_end; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1 (struct videomode *VAR_0)
{
 float VAR_1, VAR_2;

 VAR_2 = 1000.0 * VAR_0->dot_clock / VAR_0->htotal;
 VAR_1 = 1.0 * VAR_2 / VAR_0->vtotal;

    FUNC_0("\n");
    FUNC_0("  # %dx%d @ %.2f Hz (GTF) hsync: %.2f kHz; pclk: %.2f MHz\n",
 VAR_0->hdisplay, VAR_0->vdisplay, VAR_1, VAR_2, VAR_0->dot_clock / 1000.0);

    FUNC_0("  Modeline \"%dx%d_%.2f\"  %.2f"
 "  %d %d %d %d"
 "  %d %d %d %d"
 "  -HSync +Vsync\n\n",
 VAR_0->hdisplay, VAR_0->vdisplay, VAR_1, (VAR_0->dot_clock / 1000.0),
 VAR_0->hdisplay, VAR_0->hsync_start, VAR_0->hsync_end, VAR_0->htotal,
 VAR_0->vdisplay, VAR_0->vsync_start, VAR_0->vsync_end, VAR_0->vtotal);
}
