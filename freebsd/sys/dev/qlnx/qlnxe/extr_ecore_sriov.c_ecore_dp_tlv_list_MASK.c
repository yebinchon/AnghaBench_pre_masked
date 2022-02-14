
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tlv_buffer_size {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct channel_tlv {size_t type; scalar_t__ length; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,size_t,scalar_t__) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 scalar_t__ FUNC_2 (size_t) ;

void FUNC_3(struct ecore_hwfn *VAR_3, void *VAR_4)
{
 u16 VAR_5 = 1, VAR_6 = 0;
 struct channel_tlv *VAR_7;

 do {

  VAR_7 = (struct channel_tlv *)((u8 *)VAR_4 + VAR_6);


  if (FUNC_2(VAR_7->type))
   FUNC_1(VAR_3, VAR_1,
       "TLV number %d: type %s, length %d\n",
       VAR_5, VAR_2[VAR_7->type],
       VAR_7->length);
  else
   FUNC_1(VAR_3, VAR_1,
       "TLV number %d: type %d, length %d\n",
       VAR_5, VAR_7->type, VAR_7->length);

  if (VAR_7->type == VAR_0)
   return;


  if (!VAR_7->length) {
   FUNC_0(VAR_3, 0, "TLV of length 0 found\n");
   return;
  }

  VAR_6 += VAR_7->length;

  if (VAR_6 >= sizeof(struct tlv_buffer_size)) {
   FUNC_0(VAR_3, 0, "TLV ==> Buffer overflow\n");
   return;
  }

  VAR_5++;
 } while (1);
}
