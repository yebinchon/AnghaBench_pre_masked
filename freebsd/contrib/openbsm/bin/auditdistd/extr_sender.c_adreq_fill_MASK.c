
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct adreq {int adr_cmd; size_t adr_datasize; unsigned char const* adr_data; scalar_t__ adr_seq; } ;


 size_t VAR_0 ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_4(struct adreq *VAR_1, uint8_t VAR_2, const unsigned char *VAR_3,
    size_t VAR_4)
{
 static uint64_t VAR_5 = 1;

 FUNC_1(VAR_4 <= VAR_0);

 switch (VAR_2) {
 case 128:
 case 131:
  FUNC_1(VAR_3 != ((void*)0) && VAR_4 == 0);
  VAR_4 = FUNC_3(VAR_3) + 1;
  break;
 case 132:
  FUNC_1(VAR_3 != ((void*)0) && VAR_4 > 0);
  break;
 case 129:
 case 130:
  FUNC_1(VAR_3 == ((void*)0) && VAR_4 == 0);
  break;
 default:
  FUNC_0("Invalid command (%hhu).", VAR_2);
 }

 VAR_1->adr_cmd = VAR_2;
 VAR_1->adr_seq = VAR_5++;
 VAR_1->adr_datasize = VAR_4;

 if (VAR_3 != ((void*)0) && VAR_3 != VAR_1->adr_data)
  FUNC_2(VAR_3, VAR_1->adr_data, VAR_4);
}
