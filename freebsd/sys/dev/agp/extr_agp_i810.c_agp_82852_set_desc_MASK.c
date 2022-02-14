
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_match {int dummy; } ;
typedef int device_t ;






 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1, const struct agp_i810_match *VAR_2)
{

 switch (FUNC_1(VAR_1, VAR_0, 1)) {
 case 128:
  FUNC_0(VAR_1,
      "Intel 82855GME (855GME GMCH) SVGA controller");
  break;
 case 129:
  FUNC_0(VAR_1,
      "Intel 82855GM (855GM GMCH) SVGA controller");
  break;
 case 130:
  FUNC_0(VAR_1,
      "Intel 82852GME (852GME GMCH) SVGA controller");
  break;
 case 131:
  FUNC_0(VAR_1,
      "Intel 82852GM (852GM GMCH) SVGA controller");
  break;
 default:
  FUNC_0(VAR_1,
      "Intel 8285xM (85xGM GMCH) SVGA controller");
  break;
 }
}
