
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_element {struct user_element* tlv_data; } ;
struct snd_kcontrol {struct user_element* private_data; } ;


 int FUNC_0 (struct user_element*) ;

__attribute__((used)) static void FUNC_1(struct snd_kcontrol *VAR_0)
{
 struct user_element *VAR_1 = VAR_0->private_data;
 if (VAR_1->tlv_data)
  FUNC_0(VAR_1->tlv_data);
 FUNC_0(VAR_1);
}
