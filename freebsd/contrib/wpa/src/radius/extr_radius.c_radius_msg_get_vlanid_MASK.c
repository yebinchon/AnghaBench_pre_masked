
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tunnel ;
struct radius_tunnel_attrs {scalar_t__ type; scalar_t__ medium_type; int vlanid; scalar_t__ tag_used; } ;
struct radius_msg {size_t attr_used; } ;
struct radius_attr_hdr {int length; int type; } ;
typedef int buf ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int const*,size_t) ;
 int FUNC_3 (struct radius_tunnel_attrs**,int ,int) ;
 int FUNC_4 (int*,int,int,int ) ;
 struct radius_attr_hdr* FUNC_5 (struct radius_msg*,size_t) ;

int FUNC_6(struct radius_msg *VAR_4, int *VAR_5, int VAR_6,
     int *VAR_7)
{
 struct radius_tunnel_attrs VAR_8[VAR_1], *VAR_9;
 size_t VAR_10;
 struct radius_attr_hdr *VAR_11 = ((void*)0);
 const u8 *VAR_12;
 char VAR_13[10];
 size_t VAR_14;
 int VAR_15, VAR_16 = 0, VAR_17;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
  VAR_7[VAR_15] = 0;
 *VAR_5 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_4->attr_used; VAR_10++) {
  VAR_11 = FUNC_5(VAR_4, VAR_10);
  if (VAR_11->length < sizeof(*VAR_11))
   return -1;
  VAR_12 = (const u8 *) (VAR_11 + 1);
  VAR_14 = VAR_11->length - sizeof(*VAR_11);
  if (VAR_11->length < 3)
   continue;
  if (VAR_12[0] >= VAR_1)
   VAR_9 = &VAR_8[0];
  else
   VAR_9 = &VAR_8[VAR_12[0]];

  switch (VAR_11->type) {
  case 128:
   if (VAR_11->length != 6)
    break;
   VAR_9->tag_used++;
   VAR_9->type = FUNC_0(VAR_12 + 1);
   break;
  case 130:
   if (VAR_11->length != 6)
    break;
   VAR_9->tag_used++;
   VAR_9->medium_type = FUNC_0(VAR_12 + 1);
   break;
  case 129:
   if (VAR_12[0] < VAR_1) {
    VAR_12++;
    VAR_14--;
   }
   if (VAR_14 >= sizeof(VAR_13))
    break;
   FUNC_2(VAR_13, VAR_12, VAR_14);
   VAR_13[VAR_14] = '\0';
   VAR_17 = FUNC_1(VAR_13);
   if (VAR_17 <= 0)
    break;
   VAR_9->tag_used++;
   VAR_9->vlanid = VAR_17;
   break;
  case 131:
   if (VAR_11->length != 6)
    break;
   VAR_17 = FUNC_0(VAR_12 + 1);
   if (VAR_17 <= 0)
    break;
   if (VAR_12[0] == 0x32)
    *VAR_5 = VAR_17;
   else if (VAR_12[0] == 0x31 && VAR_7 &&
     VAR_16 < VAR_6)
    VAR_7[VAR_16++] = VAR_17;
   break;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_9 = &VAR_8[VAR_10];
  if (VAR_9->tag_used &&
      VAR_9->type == VAR_2 &&
      VAR_9->medium_type == VAR_0 &&
      VAR_9->vlanid > 0) {
   *VAR_5 = VAR_9->vlanid;
   break;
  }
 }

 if (VAR_16)
  FUNC_4(VAR_7, VAR_16, sizeof(int), VAR_3);

 if (*VAR_5 > 0 || VAR_16)
  return 1;
 return 0;
}
