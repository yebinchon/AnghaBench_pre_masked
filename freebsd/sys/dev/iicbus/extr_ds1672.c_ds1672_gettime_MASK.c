
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct timespec*) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct timespec *VAR_3)
{
 uint8_t VAR_4[4];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, VAR_4, 4);
 if (VAR_5 == 0) {

  VAR_3->tv_sec = (VAR_4[3] << 24) | (VAR_4[2] << 16)
      | (VAR_4[1] << 8) | (VAR_4[0] << 0);
  VAR_3->tv_nsec = 0;
 }
 FUNC_0(VAR_2, VAR_0, VAR_3);
 return (VAR_5);
}
