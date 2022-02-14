
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ type; int fd; int tcp_is_reading; int tcp_timeout_msec; scalar_t__ tcp_byte_count; int dnscrypt_buffer; scalar_t__ dnscrypt; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct comm_point*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct comm_point* VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 FUNC_1(VAR_2->type == VAR_1);
 FUNC_1(VAR_2->fd == -1);
 FUNC_2(VAR_2->buffer);




 VAR_2->tcp_is_reading = 1;
 VAR_2->tcp_byte_count = 0;
 VAR_6 = (VAR_4 * 100) / VAR_5;
 if(VAR_6 > 50 && VAR_6 <= 65)
  VAR_2->tcp_timeout_msec /= 100;
 else if (VAR_6 > 65 && VAR_6 <= 80)
  VAR_2->tcp_timeout_msec /= 500;
 else if (VAR_6 > 80)
  VAR_2->tcp_timeout_msec = 0;
 FUNC_0(VAR_2, VAR_3,
  VAR_2->tcp_timeout_msec < VAR_0
   ? VAR_0
   : VAR_2->tcp_timeout_msec);
}
