
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int format; int dma_active; int buffer; struct sc_info* parent; } ;
struct playback_command {int dma_prog; int format_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sc_info*,int) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 struct playback_command* FUNC_2 (int) ;
 int FUNC_3 (struct sc_chinfo*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct sc_chinfo *VAR_7)
{
 const struct playback_command *VAR_8;
 struct sc_info *VAR_9 = VAR_7->parent;
 u_int32_t VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_4(VAR_7->buffer);
 VAR_11 = FUNC_5(VAR_7->buffer);
 VAR_12 = VAR_11 / 2;
 if (VAR_7->format & VAR_0)
  VAR_12 /= 2;
 VAR_12--;

 FUNC_0(VAR_9, VAR_3);
 FUNC_3(VAR_7);

 FUNC_1(VAR_9, VAR_2, VAR_10);
 FUNC_1(VAR_9, VAR_1, (VAR_11 - 1) | 0x180000);

 VAR_8 = FUNC_2(VAR_7->format);
 VAR_13 = VAR_8->dma_prog | VAR_5 | VAR_4 | VAR_6;

 FUNC_0(VAR_9, VAR_13);
 FUNC_0(VAR_9, VAR_8->format_val);
 FUNC_0(VAR_9, VAR_12 & 0xff);
 FUNC_0(VAR_9, VAR_12 >> 8);

 VAR_7->dma_active = 1;
}
