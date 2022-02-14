
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc_softc {struct dc_mediainfo* dc_mi; int dc_dev; } ;
struct dc_mediainfo {int dc_gp_len; struct dc_mediainfo* dc_next; int * dc_reset_ptr; int dc_reset_len; int * dc_gp_ptr; int dc_media; } ;
struct dc_eblock_mii {int dc_gpr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct dc_mediainfo* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct dc_softc *VAR_5, struct dc_eblock_mii *VAR_6)
{
 struct dc_mediainfo *VAR_7;
 uint8_t *VAR_8;

 VAR_7 = FUNC_1(sizeof(struct dc_mediainfo), VAR_2, VAR_3 | VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_5->dc_dev, "Could not allocate mediainfo\n");
  return (VAR_0);
 }

 VAR_7->dc_media = VAR_1;
 VAR_7->dc_gp_len = VAR_6->dc_gpr_len;

 VAR_8 = (uint8_t *)VAR_6;
 VAR_8 += sizeof(struct dc_eblock_mii);
 VAR_7->dc_gp_ptr = VAR_8;
 VAR_8 += 2 * VAR_6->dc_gpr_len;
 VAR_7->dc_reset_len = *VAR_8;
 VAR_8++;
 VAR_7->dc_reset_ptr = VAR_8;

 VAR_7->dc_next = VAR_5->dc_mi;
 VAR_5->dc_mi = VAR_7;
 return (0);
}
